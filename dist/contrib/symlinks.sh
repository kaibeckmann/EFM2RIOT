#!/bin/sh

BOARDS="slstk3401a slstk3402a sltb001a slwstk6220a stk3200 stk3600 stk3700 stk3800"
FAMILIES="efm32_common efm32g efm32gg efm32gg11b efm32hg efm32jg12b efm32jg1b efm32lg efm32pg12b efm32pg1b efm32tg efm32tg11b efm32wg efm32zg efr32bg12p efr32bg13p efr32bg14p efr32bg1b efr32bg1p efr32bg1v efr32fg12p efr32fg13p efr32fg14p efr32fg14v efr32fg1p efr32fg1v efr32mg12p efr32mg13p efr32mg14p efr32mg1b efr32mg1p efr32mg1v ezr32hg ezr32lg ezr32wg"

SOURCE=`dirname $0`/..
TARGET=$1

# Symlink all boards into 'RIOT_ROOT/boards/'.
for board in $BOARDS
do
    ln -sf `realpath "$SOURCE/boards/$board"` "$TARGET/boards/"
done

# Symlink all families into 'RIOT_ROOT/cpu/'.
for family in $FAMILIES
do
    ln -sf `realpath "$SOURCE/cpu/$family"` "$TARGET/cpu/"
done

# Symlink the package into 'RIOT_ROOT/pkg'
ln -sf `realpath "$SOURCE/pkg/emlib"` "$TARGET/pkg/"
