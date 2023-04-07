#a puppet manifest to kill a process named killmenow using pkill

exec{'pkill killmenow'
  command => '/usr/bin/pkill killmenow',
  provider => 'shell',
}
