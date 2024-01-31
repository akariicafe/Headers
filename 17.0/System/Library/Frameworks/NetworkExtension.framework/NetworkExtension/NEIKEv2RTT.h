@interface NEIKEv2RTT : NSObject {
    unsigned short _rxt_shift;
    int _lastRequestMessageID;
    unsigned long long _rtt_cur;
    unsigned long long _srtt;
    unsigned long long _rtt_var;
    unsigned long long _rtt_start_time;
    unsigned long long _rtt_min;
    unsigned long long _rtt_updated;
    unsigned long long _rxt_cur;
}

- (id)init;

@end
