## GProxy++ - Modified For Mac
 This version of GProxy++ by Varlock has been modified for ease of use with Mac clients.
 #### Requirements
---
| Name | Description |
|--|--|
| **HomeBrew** | Helps manage missing packages required for some softwares to run |
|**GMP**|Missing package installed via HomeBrew|
|**Warcraft III.exe** |Obtained from a Windows installation or via this [LINK](https://drive.google.com/open?id=1RFuBbhRV_nHxvIAAvEstXUw4iW2unPdd)|
| **GProxy++** | Provided with the download |
| **libbncsutil.dylib** | Provided with the download |
 #### Initial Setup
---
##### Installing Homebrew:
1. Launch **Install-Homebrew.command** located in the requirements folder
2. Stike the *Return* key to continue with the installation
3. When prompted, enter your password
   - This will  start the installation process
   - Do not proceed to the next step until this is completed

 ##### Installing GMP
1. Launch **Install-GMP.command** located in the requirements folder
   - No password required
 ##### GProxy++ - First Launch
1. Launch GProxy++ via the provided **Launcher.command** file
2. Follow the following steps
   - `Install Path` - This is where you've placed your Windows Warcraft 3 files
      - You can right-click the **Warcraft III.exe** file, and click **Get Info**
      - Next, copy the file path located under **General** and beside **Where**\
   *If you've placed your files within your installation folder, you'll use `/Applications/Warcraft III/`*
   - `Reign of Chaos CD key` - Enter in your CD-key
   - `Frozen Throne CD Key` - Enter in your CD-key (if playing TFT)
   - `Server` - Enter in the number/name, or a custom address for a PvPGN server
   - `Username` - Enter in your username **Must be created and have logged in at least once to work**
   - `Password` - Enter your login password
   - `Channel` - Enter your desired channel to join upon logging in
3. After completing the setup, this will auto-populate/create a `Gproxy.cfg` file
   -  If you're connecting to a PvPGN server, you'll need to change some settings in the mentioned file
   - If you desire to switch realms, you will need to edit the `GProxy.cfg` file in a **texteditor**
 
 #### How To Use
---
1. If not launched, open GProxy++ via the provided **Launcher.command** file
2. Stike the enter key to log onto *Battle*.net
3. In the GProxy++ window, type `/public` to see a list of all public games.\
 *Alternatively, you can use `/game gamename` to refine to a specific gamename*\
 *More commands can be found below*
 4. Open Warcraft 3 and click the **LAN** menu option. This is how you will be able to join games
 **NOTE:** Make sure the username you used in `GProxy.cfg` matches the username you use in the LAN Screen
 ##### Game Name Colors
---
| Color | Description |
| -- |--|
| **Blue** | GProxy is enabled, and you'll be provided with GProxy reconnect protection|
| **White** | The Player/Bot does not support GProxy reconnect protection |
 #### Help
---
Type `/help` at any time for help when using GProxy++.
 ##### Commands
 In the GProxy++ console:
- `/commands`  show command list
- `/exit` or `/quit`  close GProxy++
- `/filter <f>` start filtering public game names for <f>
- `/filteroff`  stop filtering public game names
- `/game <gamename>`  look for a specific game named <gamename>
- `/help`  show help text
- `/public`  enable listing of public games (also: /publicon, /public on, /list, /liston, /list on)
- `/publicoff`  disable listing of public games (also: /public off, /listoff, /list off)
- `/r <message>`  reply to the last received whisper
- `/start`  start Warcraft III
- `/version`  show version text
 In game:
 - `/re <message>`  reply to the last received whisper
- `/sc`  whispers "spoofcheck" to the game host (also: /spoof, /spoofcheck, /spoof check)
- `/status`  show status information
- `/w <user> <message>`  whispers <message> to <user>
 #### GProxy Example Configuration File
---
```
### required config values
war3path = /Applications/Warcraft III/
cdkeyroc = [roc cd key]
cdkeytft = [tft cd key]
server = useast.battle.net/uswest.battle.net/asia.battle.net/europe.battle.net [Choose 1]
username = [yourBattle.netUsername]
password = [yourBattle.netPassword]
channel = [yourStartingChannel]

### optional config values
war3version = 29
port = 6125
exeversion =
exeversionhash =
passwordhashtype =
```
 #### Troubleshooting
---
- **"Filename" can't be opened because it is from an unidentified developer.**
   - Open **System Preferences** by clicking the **Apple** icon on the top left of your screen
   - Click on **Security & Privacy**
   - Next to `"Filename" was blocked from opening because it is not from an identied developer.`
   - Click **Open Anyway** to launch the command/app
- **dyld: Library not loaded: /usr/local/opt/gmp/lib/libgmp.10.dylib**
   - This means you've not properly installed the missing **GMP package**\
 Refer to **Installing GMP** for instructions on installing.\
 You may require **Installing Homebrew** if **Installing GMP** did not work.