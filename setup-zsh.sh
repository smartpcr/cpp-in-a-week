cd ~/.oh-my-zsh/plugins
git clone https://github.com/zsh-users/zsh-syntax-highlighting
git clone https://github.com/zsh-users/zsh-autosuggestions
compaudit | xargs chmod g-w,o-w ~/.oh-my-zsh/plugins

cd ~/
sed -i 's/robbyrussell/xiong-chiamiov/g' .zshrc
sed -i 's/\(git\)/git colored-man-pages zsh-autosuggestions zsh-syntax-highlighting/g' .zshrc

sudo chsh -s $(which zsh)
source ~/.zshrc