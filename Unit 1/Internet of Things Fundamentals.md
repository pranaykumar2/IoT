### Introduction to the Internet of Things

The **Internet of Things (IoT)** is a network of interconnected devices that use embedded systems, such as processors, sensors, and communication hardware, to collect, send, and act on data. The **devices** can share sensor data with one another through a network over the internet. These **devices** connect and exchange data in real time.

**IoT systems** function by gathering data from sensors embedded in **IoT devices**, which is then transmitted through an **IoT gateway** for analysis by an application or back-end system. An **IoT ecosystem** is comprised of:

- **IoT device**: collects data from its sensors
- **IoT gateway**: acts as a central hub where **IoT devices** send data
- **User interface**: the way that humans interact with the data or the devices
- **Analytics**: software that analyzes the data
- **Back-end application**: determines how to use the data
- **Business applications**: use the data to make business decisions

A **smart object** is any device that can be assigned an **Internet Protocol address** and can transfer data over a network.

**Examples of smart objects include**:

- **A farming tire pressure monitor** that can alert the driver when the pressure is low
- **A person with a heart monitor implant** that can transmit data to a doctor

### Physical Design & Functional Blocks of IoT

#### Physical Design

The **physical design** of an **IoT** system refers to the individual node devices and their protocols that perform tasks such as remote sensing, actuating, monitoring, etc., by relying on physically connected devices.

**The things/devices in the IoT system are used for**:

- Building connections
- Data processing
- Providing storage
- Providing interfaces
- Providing graphical interfaces

The **physical design** focuses on specific solutions and how they are assembled or configured.

**Connectivity between the devices is enabled by**:

- **USB hosts** and **ethernet**
- **Processors** like **CPUs**
- **Interfaces** like **HDMI** and **RCA devices**
- **Actuators** that give input and output signals
- **Storage interfaces** like **SD, MMC**, and **SDIO**
- **DDR** and **GPU**

#### Functional Blocks

**IoT systems** include several functional blocks, such as devices, communication, security, services, and application.

**These blocks provide**:

- Sensing
- Identification
- Actuation
- Management
- Communication

The **functional blocks** manage the communication between the server and the host, enable monitoring control functions, manage data transfer, and consist of devices that handle control capability.

**The functional blocks are**:

- **Device**: provides sensing, actuation, monitoring, and system functions
- **Communication**: handles communication for the **IoT system**
- **Services**: provides services for device monitoring, device control, data publishing, and device discovery
- **Management**: provides various functions to govern the **IoT system**
- **Security**: provides authentication, authorization, message and content integrity, and data security
- **Application**: an interface that users can use to control and monitor various aspects of the **IoT system**

### Device Architectures

**IoT** architectures can be broadly classified based on how they handle the flow of data and processing. Two common architectures are **client-server** and **peer-to-peer**.

#### Client-Server Architecture

In a **client-server architecture**, devices (clients) connect to a central server to exchange data and receive instructions. The **server** acts as a central point of control and processing. This architecture is suitable for applications where centralized control and data management are required.

**Examples**: smart home systems, industrial automation systems

#### Peer-to-Peer Architecture

In a **peer-to-peer architecture**, devices communicate directly with each other without relying on a central server. This architecture is suitable for applications where devices need to collaborate and share information locally, such as in a sensor network for environmental monitoring.

**Examples**: sensor networks, ad hoc networks

### Core IoT Functional Stack

The **core IoT functional stack** is a layered architecture that describes the different components and functions involved in an **IoT system.** It typically includes the following layers:

**| Layer | Description |** |---|---| | **1. Things (Sensors and Actuators)** | This layer consists of the physical devices that collect data from the environment (sensors) or perform actions in the environment (actuators). | | **2. Connectivity Layer** | This layer provides the means for devices to communicate with each other and with the internet. It includes various wireless and wired communication technologies. | | **3. Edge Computing Layer** | This layer performs data processing and analysis close to the edge of the network, reducing the amount of data that needs to be transmitted to the cloud. | | **4. Data Accumulation Layer** | This layer is responsible for storing and managing the data collected from devices. | | **5. Application Layer** | This layer provides the user interface and applications that interact with the IoT system. | | **6. Collaboration and Processes Layer** | This layer enables collaboration and communication between different IoT systems and applications. | | **7. Business Layer** | This layer encompasses the business logic and applications that use the data and insights from the IoT system. |

### Resource-Constrained Devices

**Resource-constrained devices** are devices that have limited processing power, memory, and battery life. These devices are often used in **IoT** applications where size, cost, and energy efficiency are important considerations.

**Examples** of resource-constrained devices include:

- **Wireless sensors**
- **Wearable devices**
- **Smart meters**

**Challenges** in designing and deploying resource-constrained devices:

- **Limited processing power**: Complex data processing tasks may be challenging.
- **Limited memory**: Storing large amounts of data is difficult.
- **Limited battery life**: Frequent battery replacement or recharging may be necessary.

### Sensors and Components

**Sensors** are devices that detect and measure physical phenomena, such as temperature, light, pressure, and motion.

**Different Types of Sensors**:

- Temperature sensors
- Image sensors
- Gyro sensors
- Obstacle sensors
- IR sensors
- RF sensors
- MQ-02/05 Gas Sensor
- LDR Sensor
- Ultrasonic Distance Sensor

**Actuators** are devices that convert electrical signals into physical actions, such as turning a motor or switching a light on or off.

**Other key components** in an IoT system include:

- **Microcontrollers**: Small, low-power computers that control the operation of sensors and actuators
- **Communication modules**: Enable devices to connect to a network (e.g., Wi-Fi, Bluetooth, cellular)
- **Power sources**: Provide energy to the devices (e.g., batteries, solar panels)

### IoT Enabling Technologies

Several technologies have enabled the development and growth of **IoT**.

These include:

- **Sensors and actuators**: Advancements in sensor technology have made it possible to collect data from a wide range of physical phenomena.
- **Connectivity**: The availability of various wireless and wired communication technologies enables devices to connect to the internet.
- **Cloud computing**: Provides a platform for storing, processing, and analyzing large amounts of data generated by IoT devices.
- **Big data analytics**: Enables the extraction of insights from large datasets generated by IoT devices.
- **Embedded systems**: Small, low-power computers that control the operation of sensors and actuators in IoT devices.
- **Artificial intelligence (AI)** and **machine learning (ML)**: Enable devices to learn from data and make intelligent decisions.
- **Wireless Sensor Networks (WSN)**: A WSN comprises distributed devices with sensors that are used to monitor environmental and physical conditions.

### Societal Benefits of IoT (Domain Specific)

**IoT offers several benefits to organizations** and encourages companies to rethink how they approach their businesses and gives them the tools to improve their business strategies. **IoT** also minimizes human effort, saves time and effort, and is good for personal safety and security.

#### Table of Societal Benefits of IoT by Domain:

| Domain                | Benefits                                                                              |
| --------------------- | ------------------------------------------------------------------------------------- |
| **Consumer**          | Smart homes, wearable devices, connected cars                                         |
| **Enterprise**        | Improved efficiency, reduced costs, enhanced customer service, better decision-making |
| **Industrial**        | Industrial automation, supply chain management, predictive maintenance                |
| **Healthcare**        | Remote patient monitoring, chronic disease management, improved diagnostics           |
| **Transportation**    | Optimized routes, reduced fuel costs, improved safety                                 |
| **Urban Development** | Smart cities, environmental monitoring, traffic management                            |
| **Agriculture**       | Precision farming, livestock monitoring, optimized irrigation                         |

### Risks, Privacy, and Security

While **IoT** offers many potential benefits, it also comes with potential drawbacks.

**The drawbacks of IoT include**:

- **Security concerns**: Increased attack surface for devices, making them vulnerable to hackers
- **Privacy risks**: Devices can collect and transmit sensitive personal information
- **Job displacement**: Increased automation can lead to job losses in certain sectors
- **Compatibility issues**: Lack of interoperability between different devices and platforms
- **Increased unemployment rates**: Dependence on technology
- **Highly dependent on the internet**: Lack of internet can cause issues
- **Lack of international standards for communication**: Issues with communication
- **Lack of mental and physical activity by humans leading to health issues**: Over-reliance on technology can cause health issues

**Privacy and Security Concerns**:

**IoT** connects billions of devices to the internet and involves the use of billions of data points. Hackers can exploit vulnerabilities in devices to manipulate data and steal personal information. In 2016, the **Mirai botnet** infiltrated a large number of **IoT devices**, resulting in one of the largest **distributed denial-of-service** attacks ever seen.

**Best Practices to Ensure IoT Security**:

- Authentication of devices, gateways, users, services, and applications
- Encryption of data, both in transit and at rest
- Regularly update device firmware and software
- Disable Universal Plug and Play (UPnP) on routers
- Use strong passwords and multi-factor authentication
- Implement access control measures to restrict unauthorized access to devices and data

**Organizations involved in the development of IoT standards**:

- International Electrotechnical Commission
- Institute of Electrical and Electronics Engineers (IEEE)
- Industrial Internet Consortium
- Open Connectivity Foundation
- Thread Group
