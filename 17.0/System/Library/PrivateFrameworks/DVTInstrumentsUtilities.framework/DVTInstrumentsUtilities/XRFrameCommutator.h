@interface XRFrameCommutator : NSObject {
    struct unique_ptr<xray::scheduler::Commutator, std::default_delete<xray::scheduler::Commutator>> { struct __compressed_pair<xray::scheduler::Commutator *, std::default_delete<xray::scheduler::Commutator>> { struct Commutator *__value_; } __ptr_; } _commutatorImpl;
}

+ (id)sharedCommutator;

- (id)init;
- (void)dealloc;
- (void)start;
- (id).cxx_construct;
- (void)stop;
- (void).cxx_destruct;
- (void)setPeriod:(unsigned long long)a0;
- (id)newRing;
- (void)addRing:(id)a0;
- (id)initWithMinorFrameCount:(unsigned char)a0;
- (void)observedTopOfMajorFrame;
- (void)removeRing:(id)a0;

@end
