# TXT2BF

![Made with C](https://img.shields.io/badge/made%20with-c-0.svg?color=cc2020&labelColor=ff3030&logo=data%3Aimage%2Fsvg%2Bxml%3Bbase64%2CPHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHZpZXdCb3g9IjAgMCAxMjggMTI4Ij48cGF0aCBmaWxsPSIjNjU5QUQzIiBkPSJNMTE1IDMxTDY3IDNsLTMtMS0zIDEtNDggMjhjLTIgMS0zIDMtMyA1djU2bDEgMyAxMDctNjItMy0yeiIvPjxwYXRoIGZpbGw9IiMwMzU5OUMiIGQ9Ik0xMSA5NWwyIDIgNDggMjggMyAxIDMtMSA0OC0yOGMyLTEgMy0zIDMtNVYzNmwtMS0zTDExIDk1eiIvPjxwYXRoIGZpbGw9IiNmZmYiIGQ9Ik04NSA3NmEyNSAyNSAwIDEgMSAwLTI0bDEzLTdhNDAgNDAgMCAxIDAgMCAzOWwtMTMtOHoiLz48L3N2Zz4%3D&style=for-the-badge)

![GitHub](https://img.shields.io/github/license/DeBos99/txt2bf.svg?color=2020cc&labelColor=5050ff&style=for-the-badge)
![GitHub followers](https://img.shields.io/github/followers/DeBos99.svg?color=2020cc&labelColor=5050ff&style=for-the-badge)
![GitHub forks](https://img.shields.io/github/forks/DeBos99/txt2bf.svg?color=2020cc&labelColor=5050ff&style=for-the-badge)
![GitHub stars](https://img.shields.io/github/stars/DeBos99/txt2bf.svg?color=2020cc&labelColor=5050ff&style=for-the-badge)
![GitHub watchers](https://img.shields.io/github/watchers/DeBos99/txt2bf.svg?color=2020cc&labelColor=5050ff&style=for-the-badge)
![GitHub contributors](https://img.shields.io/github/contributors/DeBos99/txt2bf.svg?color=2020cc&labelColor=5050ff&style=for-the-badge)

![GitHub commit activity](https://img.shields.io/github/commit-activity/w/DeBos99/txt2bf.svg?color=ffaa00&labelColor=ffaa30&style=for-the-badge)
![GitHub commit activity](https://img.shields.io/github/commit-activity/m/DeBos99/txt2bf.svg?color=ffaa00&labelColor=ffaa30&style=for-the-badge)
![GitHub commit activity](https://img.shields.io/github/commit-activity/y/DeBos99/txt2bf.svg?color=ffaa00&labelColor=ffaa30&style=for-the-badge)
![GitHub last commit](https://img.shields.io/github/last-commit/DeBos99/txt2bf.svg?color=ffaa00&labelColor=ffaa30&style=for-the-badge)

![GitHub issues](https://img.shields.io/github/issues-raw/DeBos99/txt2bf.svg?color=cc2020&labelColor=ff3030&style=for-the-badge)
![GitHub closed issues](https://img.shields.io/github/issues-closed-raw/DeBos99/txt2bf.svg?color=10aa10&labelColor=30ff30&style=for-the-badge)

[![Donate](https://www.paypalobjects.com/en_US/i/btn/btn_donateCC_LG.gif)](https://www.paypal.com/cgi-bin/webscr?cmd=_s-xclick&hosted_button_id=NH8JV53DSVDMY)

**TXT2BF** generates brainfuck code that outputs given text.

## Content

- [Content](#content)
- [Installation](#installation)
  - [Windows](#windows)
  - [Unix](#unix)
    - [Debian/Ubuntu](#apt)
    - [Arch Linux/Manjaro](#pacman)
    - [CentOS](#yum)
    - [MacOS](#homebrew)
- [Usage](#usage)
- [Authors](#authors)
- [Contact](#contact)
- [License](#license)

## Installation

### Windows

* Install [Make](http://gnuwin32.sourceforge.net/packages/make.htm).
* Install [MinGW](https://sourceforge.net/projects/mingw-w64/files/latest/download).
* Run following command in the terminal:
```
git clone "https://github.com/DeBos99/txt2bf.git"
make -C txt2bf
```

### Unix

#### <a name="APT">Debian/Ubuntu based

* Run following commands in the terminal:
```
sudo apt install git gcc -y
git clone "https://github.com/DeBos99/txt2bf.git"
make -C txt2bf
```

#### <a name="Pacman">Arch Linux/Manjaro

* Run following commands in the terminal:
```
sudo pacman -S git gcc --noconfirm
git clone "https://github.com/DeBos99/txt2bf.git"
make -C txt2bf
```

#### <a name="YUM">CentOS

* Run following commands in the terminal:
```
sudo yum install git gcc -y
git clone "https://github.com/DeBos99/txt2bf.git"
make -C txt2bf
```

#### <a name="Homebrew">MacOS

* Run following commands in the terminal:
```
brew install git gcc
git clone "https://github.com/DeBos99/txt2bf.git"
make -C txt2bf
```

## Usage

`./txt2bf INPUT_FILE OUTPUT_FILE`

## Authors

* **Michał Wróblewski** - Main Developer - [DeBos99](https://github.com/DeBos99)

## Contact

* Discord: DeBos#3292
* Reddit: [DeBos99](https://www.reddit.com/user/DeBos99)

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
