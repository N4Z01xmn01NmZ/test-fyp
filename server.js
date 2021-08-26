const app = require('express');
const server = require('http').createServer(app);
const io = require('socket.io')(server);

// Authorization
const bcrypt = require('bcrypt');
function authorize(secret, hash) {
    return bcrypt.compareSync(secret, hash);
}

/**
 * SERVER side
 */

const userList = [];
const roomList = [];
const hostList = [];
const participantList = [];

function getUser(id) {
    return userList.find(user => user.id === id);
}

function deleteUser(id) {
    const index = userList.findIndex(user => user.id === id);
    if (index !== -1) {
        userList.splice(index, 1)[0];
    }
}

function deleteRoom(index) {
    if (index !== -1) {
        roomList.splice(index, 1)[0];
        hostList.splice(index, 1)[0];
        participantList.splice(index, 1)[0];
    }
}

/**
 * CLIENT side
 */
io.on('connection', socket => {
    console.log(`${socket.id} connected`);

    // Open or host a room
    function hostRoom() {

    }

    // Close room
    function closeRoom() {

    }

    // Enter room as participant
    function enterRoom() {

    }

    // Leave room
    function leaveRoom() {

    }

    socket.on('announcement', () => {

    });

    socket.on('announcement', () => {

    });

    socket.on('disconnect', () => {
        console.log(`${socket.id} disconnected`);
    });
})

const PORT = process.env.PORT || 4433;
server.listen(PORT, () => console.log(`Server running on port ${PORT}`));