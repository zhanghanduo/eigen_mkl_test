# eigen_mkl_test

**Important Tips**:

1. Add "/opt/intel/bin/compilervars.sh intel64" to ~/.bashrc

2. Follow the [Intel MKL link line Advisor]  (https://software.intel.com/en-us/articles/intel-mkl-link-line-advisor/) page.
So in our case, we choose "dynamic" linking, GNU C/C++, Intel64, "32-bit integer interface layer" which generates:  
```
 -L${MKLROOT}/lib/intel64 -Wl,--no-as-needed -lmkl_intel_lp64 -lmkl_sequential -lmkl_core -lpthread -lm -ldl
 ```
