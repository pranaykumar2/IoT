### Network Components

- **Sensors**: Collect data from the environment, like temperature, humidity, or motion. Examples include gas sensors, water quality sensors, and moisture sensors.
- **Processors**: Analyze and process data collected by sensors. This might include embedded hardware devices and microcontrollers.
- **Gateways**: Route processed data to the appropriate location for utilization, including cloud-based applications. Gateways provide network connectivity for data transmission.
- **Applications**: User-controlled, cloud-based applications that utilize the collected data to deliver specific services. Examples include home automation apps, security systems, and industrial control hubs.

### Internet Structure

The internet relies on a **stack of technologies** to ensure secure and reliable communication between devices.

- **Lower layers** manage physical connections (e.g., Bluetooth LE).
- **Higher layers** manage logical addressing and routing (e.g., IPv6).
- **Top layers** are used by applications, like message queuing technologies.

Two main models describe internet structure:

- **OSI Model**: A seven-layer abstract model.
- **TCP/IP Model**: A four-layer concrete implementation of the OSI model.

**TCP/IP Model Layers:**

1. **Network Access & Physical Layer**: Governs physical connections and device identification using MAC addresses.
2. **Internet Layer**: Manages logical addressing and routing using IP addresses.
3. **Transport Layer**: Provides reliable data transmission between applications using protocols like TCP and UDP.
4. **Application Layer**: Handles application-level messaging using protocols like HTTP/S.

### Wireless Protocols

**Important IoT Wireless Protocols:**

| Protocol     | Description                                                                                                                                                                                                                                                                                |
| :----------- | :----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| LPWAN        | Low-Power Wide Area Network, designed for low-power, long-range communication, ideal for large-scale deployments of IoT devices like sensors. Examples: LoRa, SigFox, LTE-M, NB-IoT.                                                                                                       |
| Cellular     | NB-IoT and LTE-M standards use existing cellular networks for low-power, low-cost IoT communication.                                                                                                                                                                                       |
| Bluetooth LE | Low-power, short-range communication protocol commonly used for wearable devices and home automation.                                                                                                                                                                                      |
| Zigbee       | Low-power, low-data-rate protocol based on the IEEE 802.15.4 standard, commonly used for home and building automation.                                                                                                                                                                     |
| NFC          | Near Field Communication protocol for very short-range communication (up to 4 cm), often used for payment systems and check-in systems.                                                                                                                                                    |
| RFID         | Radio-frequency identification uses electromagnetic fields to automatically identify and track tags attached to objects. Passive RFID relies on reader-emitted energy, while Active RFID uses battery-powered tags. I-CODE is an active RFID protocol for secure long-range communication. |
| Wi-Fi        | IEEE 802.11 a/b/g/n specifications for standard wireless networking. 802.11n provides the highest data throughput but consumes more power.                                                                                                                                                 |
| Ethernet     | A wired networking technology often used for connecting gateways to the internet.                                                                                                                                                                                                          |

**Considerations When Choosing a Wireless Protocol:**

- **Range:** Distance over which data is transmitted.
- **Bandwidth:** Amount of data that can be transmitted per unit of time.
- **Power Usage:** Energy consumption, especially important for battery-powered devices.
- **Intermittent Connectivity:** Ability to handle temporary network disruptions.
- **Interoperability:** Ability of devices from different manufacturers to work together.
- **Security:** Protection against unauthorized access and data breaches.

### IoT Communication Model & APIs

**IoT Reference Model (IoTWF):** A seven-layer model for visualizing IoT from a technical perspective. Control flows from a central cloud service or data center to the edge (sensors, devices).

**Layers of the IoT Reference Model:**

1. **Physical Devices and Controllers**: Endpoint devices and sensors that send and receive information.
2. **Connectivity**: Reliable and timely transmission of data between devices and the network.
3. **Edge Computing**: Data reduction and conversion of network data flows into information ready for storage and processing.
4. **Data Accumulation**: Gathering and organizing data from various sources.
5. **Data Abstraction and Analysis**: Processing data to extract meaningful insights and patterns.
6. **Application**: Utilizing processed data for specific IoT applications and services.
7. **Collaboration and Processes**: Facilitating interactions and workflows between different IoT systems and stakeholders.

**M2M (Machine-to-Machine) Communication:**

- Networks exclusively used to allow machines, sensors, and controls to communicate.
- Similar to LAN or WAN networks but specifically for machine communication.

**Three-Layer Architecture for IoT:**

1. **Perception Layer**: Collects data from the physical world using sensors and actuators.
2. **Network Layer**: Transmits data between the perception and application layers.
3. **Application Layer**: Delivers application-specific services to the user.

**Five-Layer Architecture for IoT:**

1. **Physical Layer**: Includes sensors and actuators that interact with the physical world.
2. **Transport Layer**: Transmits data between the physical and processing layers.
3. **Processing Layer**: Stores, analyzes, and processes data from the transport layer.
4. **Application Layer**: Provides specific applications and services to users.
5. **Business Layer**: Manages the entire IoT system, including business models and user privacy.

**Core IoT Functional Stack:**

- **"Things" Layer**: Physical devices providing information.
    
- **Communications Network Layer**: Connects smart objects to an external system, often using wireless technology.
    
    - **Access Network Sublayer**: The last mile of the IoT network, typically using wireless technologies like 802.11ah, 802.15.4g, and LoRa.
    - **Gateways and Backhaul Network Sublayer**: Organizes multiple smart objects around a common gateway for longer-range communication.
    - **Core Network Sublayer**: Provides the infrastructure for routing data between gateways and application servers.
    - **Data Center/Cloud Sublayer**: Hosts application servers and data storage.
- **Applications and Analytics Layer**: Applications utilize information exchanged with smart objects to provide various functions.
    

**IoT Ecosystem Functional Blocks:**

- **Devices**: Collect data (sensors) or interact with the environment (actuators).
- **Networks**: Connect devices and enable data transfer using various protocols.
- **Platforms**: Aggregate and process data from devices.
- **Agents**: Utilize processed data for specific purposes, such as applications or users.

**IoT Communication APIs:**

- **REST (Representational State Transfer)**: An architectural style for designing web services that focus on a system's resources.
- **Web Socket**: Enables bi-directional, full-duplex communication between clients and servers.

**Table comparing REST and Web Socket:**

|Feature|REST API|Web Socket API|
|:--|:--|:--|
|State|Stateless|Stateful|
|Communication Type|Uni-directional|Bi-directional|
|Data Storage|Does not store data|Stores data|
|Connection|Requires new connection for each request|Maintains a single persistent connection|
|Scalability|Horizontal and vertical|Only vertical|
|Speed|Slower due to request-response overhead|Faster due to persistent connection|
|Real-time|Not suitable for real-time applications|Suitable for real-time applications|

### Wireless Protocol Stack

The wireless protocol stack describes the layers of protocols involved in wireless communication:

1. **Physical Layer (PHY)**: Governs physical transmission of data over the wireless medium.
2. **Media Access Control (MAC)**: Manages access to the shared wireless medium and coordinates data transmission between devices.
3. **Network Layer**: Handles addressing and routing of data packets.
4. **Transport Layer**: Provides reliable data transmission between applications.
5. **Application Layer**: Handles application-specific communication protocols.

### IoT Levels

**IoT levels** refer to different levels of complexity and functionality in IoT system architecture. These levels vary in the number of nodes, data processing capabilities, and the location of data storage and analysis.

**Different IoT Levels:**

- **Level 1:** A single node performs sensing, actuation, and data storage. Suitable for low-cost, low-complexity solutions with limited data.
- **Level 2:** A single node performs sensing, actuation, and local analysis. Data storage and applications reside in the cloud. Suitable for solutions with larger data volumes.
- **Level 3:** Similar to Level 2 but with more computationally intensive analysis requirements.
- **Level 4**: Multiple nodes with local and cloud-based data processing. A cloud-based observer node collects data from local nodes. Suitable for solutions with distributed data collection and complex analysis.
- **Level 5:** Multiple end nodes for sensing and actuation, and a coordinator node for data transfer to the cloud. Data is processed and analyzed in the cloud. Suitable for wireless sensor networks with large data volumes and computationally intensive analysis.
- **Level 6:** Multiple independent nodes for sensing and actuation, data transfer to the cloud, and cloud-based analysis and visualization. A centralized controller manages all end nodes. Suitable for complex IoT systems with distributed data sources and centralized control.

