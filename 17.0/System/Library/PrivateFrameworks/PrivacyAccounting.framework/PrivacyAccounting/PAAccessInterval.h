@class NSNumber, NSString, PAAccessLogger;

@interface PAAccessInterval : NSObject <PAAssetIdentifierPoolDelegate> {
    PAAccessLogger *_logger;
    struct atomic_flag { _Atomic BOOL _Value; } _wasEnded;
}

@property (readonly, nonatomic) NSNumber *slot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)placeholderAccessInterval;

- (void)dealloc;
- (void)end;
- (id)initWithLogger:(id)a0 slot:(id)a1;
- (void).cxx_destruct;
- (void)recordAccessToAssetIdentifiers:(id)a0 withVisibilityState:(long long)a1 accessEventCount:(unsigned long long)a2;
- (void)endWithTimestampAdjustment:(double)a0;

@end
