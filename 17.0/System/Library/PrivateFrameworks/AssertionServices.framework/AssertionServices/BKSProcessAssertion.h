@class RBSAssertion;

@interface BKSProcessAssertion : BKSAssertion {
    unsigned int _flags;
    RBSAssertion *_mediaPlaybackHackAssertion;
}

@property (nonatomic) unsigned int flags;
@property (readonly, nonatomic) unsigned int reason;

+ (id)NameForReason:(unsigned int)a0;

- (void)assertion:(id)a0 didInvalidateWithError:(id)a1;
- (id)initWithBundleIdentifier:(id)a0 flags:(unsigned int)a1 reason:(unsigned int)a2 name:(id)a3 withHandler:(id /* block */)a4 acquire:(BOOL)a5;
- (void)dealloc;
- (void)invalidate;
- (BOOL)acquire;
- (unsigned long long)_legacyReasonForReason:(unsigned int)a0;
- (id)initWithBundleIdentifier:(id)a0 flags:(unsigned int)a1 reason:(unsigned int)a2 name:(id)a3 withHandler:(id /* block */)a4;
- (unsigned long long)_legacyFlagsForFlags:(unsigned int)a0;
- (id)initWithBundleIdentifier:(id)a0 flags:(unsigned int)a1 reason:(unsigned int)a2 name:(id)a3;
- (id)initWithPID:(int)a0 flags:(unsigned int)a1 reason:(unsigned int)a2 name:(id)a3;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0 pid:(int)a1 flags:(unsigned int)a2 reason:(unsigned int)a3 name:(id)a4 withHandler:(id /* block */)a5 acquire:(BOOL)a6;
- (id)initWithPID:(int)a0 flags:(unsigned int)a1 reason:(unsigned int)a2 name:(id)a3 withHandler:(id /* block */)a4;
- (id)initWithPID:(int)a0 flags:(unsigned int)a1 reason:(unsigned int)a2 name:(id)a3 withHandler:(id /* block */)a4 acquire:(BOOL)a5;

@end
