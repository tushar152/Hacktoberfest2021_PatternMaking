package main

import (
	"fmt"
)

func main() {
	var rows int = 5
	for i := rows; i > 0; i-- {
	  for j := i; j > 0; j-- {
			fmt.Print("* ")
		}
	fmt.Println()
	}
}
