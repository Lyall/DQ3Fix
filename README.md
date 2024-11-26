# Dragon Quest III HD-2D Remake
[![Patreon-Button](https://raw.githubusercontent.com/Lyall/DQ3Fix/refs/heads/master/.github/Patreon-Button.png)](https://www.patreon.com/Wintermance) [![ko-fi](https://ko-fi.com/img/githubbutton_sm.svg)](https://ko-fi.com/W7W01UAI9)<br />
[![Github All Releases](https://img.shields.io/github/downloads/Lyall/DQ3Fix/total.svg)](https://github.com/Lyall/DQ3Fix/releases)

This is an ASI plugin for Dragon Quest III HD-2D Remake that adds ultrawide support.

## Features
### General
- Skip intro logos.
- Disable 60FPS cap.

### Ultrawide/narrower
- Support for any aspect ratio.
- Centred 16:9 HUD.
- Correct FOV at any aspect ratio.

## Installation
- Grab the latest release of DQ3Fix from [here.](https://github.com/Lyall/DQ3Fix/releases)
- Extract the contents of the release zip in to the the game folder.
e.g. ("**steamapps\common\DRAGON QUEST III HD-2D Remake**" for Steam).

### Steam Deck/Linux Additional Instructions
🚩**You do not need to do this if you are using Windows!**
- Open up the game properties in Steam and add `WINEDLLOVERRIDES="dsound=n,b" %command%` to the launch options.

## Configuration
- See **DQ3Fix.ini** to adjust settings.

## Screenshots

|  |
|:--------------------------:|
| Gameplay |

## Known Issues
Please report any issues you see.

## Credits
[Ultimate ASI Loader](https://github.com/ThirteenAG/Ultimate-ASI-Loader) for ASI loading. <br />
[inipp](https://github.com/mcmtroffaes/inipp) for ini reading. <br />
[spdlog](https://github.com/gabime/spdlog) for logging. <br />
[safetyhook](https://github.com/cursey/safetyhook) for hooking.
