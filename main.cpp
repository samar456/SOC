#include <systemc>

using namespace sc_core;

SC_MODULE(Scaler)
{
    SC_CTOR(Scaler)
    {
        SC_THREAD(do_operation);
        sc_time_stamp();
    }

    void do_operation()
    {
        std::cout << "Hello SystemC! Time = "
                  << sc_time_stamp() << std::endl
        sc_stop();
        wait(10, SC_NS);
    
        std::cout << "Finished at "
                  << sc_time_stamp() << std::endl;
    }
};

int sc_main(int argc, char* argv[])
{
    Scaler s("s");
    sc_start();
    return 0;
}