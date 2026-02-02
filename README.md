# Pcap-IDS

A modular Network Intrusion Detection System (NIDS) built with C++ and PcapPlusPlus. This tool provides a framework for capturing network traffic and applying security-driven analysis to detect common network-based attacks.

## 🚀 Key Features
* **Interactive NIC Selection:** Automatically lists available interfaces for monitoring.
* **Multi-Layer Detection:** (Planned) Modules for ARP poisoning, TCP SYN flood, and Port Scan detection.
* **Deep Packet Inspection (DPI):** Analysis of unencrypted protocol payloads (HTTP/FTP/Telnet).
* **Asynchronous Processing:** Uses high-performance packet capture callbacks for minimal packet loss.

## 🛠️ Technical Stack
* **Language:** C++11
* **Library:** [PcapPlusPlus](https://pcapplusplus.github.io/)
* **Build System:** CMake
* **Packet Drivers:** Npcap (Windows) / libpcap (Linux)

## 📋 Prerequisites
- PcapPlusPlus installed and configured.
- Npcap/libpcap development headers.
- CMake 3.10+

## ⚙️ Installation & Usage
1. **Clone the repo:**
   ```bash
   git clone [https://github.com/l4aaa/Pcap-IDS.git](https://github.com/l4aaa/Pcap-IDS.git)
   cd Pcap-IDS