const { Server } = require("net");

const server = new Server();

server.on("connection", (socket) => {
  console.log("Nueva conexion de", socket.remoteAddress);
});

server.listen({ port: 3000, host: "0.0.0.0" }, () => {
  console.log("Escuchando por puerto: 3000");
});
