@interface PRSuperframeStats : NSObject {
    struct shared_ptr<rose::ResponderSuperframeStats> { struct ResponderSuperframeStats *__ptr_; struct __shared_weak_count *__cntrl_; } _stats;
}

@property (readonly) struct ResponderSuperframeStats { double x0; unsigned short x1; struct ResponderSuperframeCompleteEvent { unsigned short x0; unsigned short x1; unsigned char x2; double x3; struct array<unsigned char, 8UL> { unsigned char x0[8]; } x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; double x14; unsigned char x15; unsigned char x16; unsigned char x17; unsigned char x18; struct vector<Rose::ResponderSuperframeRxPacketInfo, std::allocator<Rose::ResponderSuperframeRxPacketInfo>> { struct ResponderSuperframeRxPacketInfo *x0; struct ResponderSuperframeRxPacketInfo *x1; struct __compressed_pair<Rose::ResponderSuperframeRxPacketInfo *, std::allocator<Rose::ResponderSuperframeRxPacketInfo>> { struct ResponderSuperframeRxPacketInfo *x0; } x2; } x19; } x2; struct optional<double> { union { char x0; double x1; } x0; BOOL x1; } x3; } stats;

- (id)initWithStats:(const void *)a0;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
