(defun fact (n)
    (if (< n 2) 1
        (* n (fact (1- n)))))

(defun fib (n)
    (labels
        ((fib2 (num l m)
            (if (< num n)
                (fib2 (1+ num) (+ l m) l)
                l)))
        (fib2 0 0 1)))
        
(defun encoder (n)
(setq temp 0)
(setq counter 0)
(setq prev 0)
(if (> n 0)
    (loop 
        (loop
            (setq prev temp)
            (setq counter (+ counter 1))
            (setq temp (fib counter))
            (when (> temp n) 
                (return (format t "~%Fib encoding of ~D is ~D at ~D remainder is ~D" n prev (- counter 1) (- n prev))))
        )
        (encoder (- n prev))
        (return "Done")
        (when (<= (- n prev) 0) ( return "Done"))
    )
    )
)