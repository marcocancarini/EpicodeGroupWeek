# Epicode Group Week

Progetti di gruppo (build week) svolti durante il corso di cybersecurity di Epicode.
I lavori sono organizzati in due cartelle, una per build week.

## BuildWeek1 – Progetto di rete per la compagnia Theta

Progetto di gruppo (Settimana 4) che simula l'incarico, da parte di una compagnia fittizia
("Theta"), di progettare l'infrastruttura di rete di un edificio di 6 piani con 120 computer,
più web server, firewall perimetrale, NAS e sistemi IDS/IPS.

Il report documenta:
- **Progettazione della rete** in Cisco Packet Tracer, con segmentazione in una VLAN per piano, uno switch per piano più uno switch centrale, router centrale, server DHCP e DNS, NAS e una DMZ che isola il web server (Metasploitable/DVWA) protetta da un WAF.
- **Scelte architetturali e di sicurezza**, con il posizionamento ragionato di IDS/IPS per monitorare il traffico interno ed esterno.
- **Test sulla rete**: uno script Python per inviare richieste HTTP (GET, POST, PUT, DELETE) al web server e verificarne le risposte, e uno script di port scanning per controllare le porte aperte sui dispositivi.
- **Conclusioni**, con preventivi di spesa e raccomandazioni di configurazione e ottimizzazione.

| File | Descrizione |
|------|-------------|
| `PROGETTO TEAM BUILD .pdf` | Report completo del progetto di rete Theta |
| `Rete Theta.pkt` | Topologia di rete realizzata in Cisco Packet Tracer |
| `invioRichieste.py` | Script per inviare richieste HTTP (GET/POST/PUT/DELETE) al web server |
| `scanPorte.py` | Script di port scanning dei dispositivi di rete |
| `catturaSocket.py` | Socket TCP server in ascolto su una porta per accettare connessioni in ingresso |
| `sniffer.py` | Socket TCP server in ascolto per ricevere i dati inviati dal client |

## BuildWeek2 – Attacchi web e analisi del codice

Progetto di gruppo (Team 1) articolato in tre esercizi, svolto in laboratorio isolato tra una
macchina attaccante (Kali Linux) e una macchina target (Metasploitable 2) con configurazione
IP statica.

Il report documenta:
- **Esercizio 1 – SQL Injection su DVWA**: recupero della password dell'utente "Gordon Brown" sfruttando l'input non sanificato della web app (livello LOW). L'attacco è svolto sia manualmente (query `UNION SELECT`, poi cracking dell'hash MD5 con John the Ripper e verifica su crackstation.net) sia in modo automatizzato con Burp Suite e sqlmap.
- **Esercizio 2 – XSS Stored su DVWA**: simulazione del furto della sessione di un utente tramite Cross-Site Scripting persistente, con inoltro dei cookie a un web server controllato dal gruppo; il report suddivide il lavoro in setup degli IP, configurazione della vulnerabilità ed esecuzione.
- **Esercizio 3 – Analisi di un programma in C**: lettura e documentazione del funzionamento di un programma di ordinamento (algoritmo BubbleSort), scomposto nei suoi blocchi logici.

| File | Descrizione |
|------|-------------|
| `Report build week 2 - Team 1.pdf` | Report completo dei tre esercizi |
| `esercizio3.c` | Programma C di ordinamento BubbleSort analizzato nell'esercizio 3 |

## Nota

Materiale didattico prodotto a scopo di studio nell'ambito del corso. Tutte le tecniche e gli
strumenti documentati sono stati utilizzati esclusivamente in un ambiente di laboratorio isolato.
