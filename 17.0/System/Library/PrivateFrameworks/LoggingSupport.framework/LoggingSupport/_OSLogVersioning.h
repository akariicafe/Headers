@class _OSLogCollectionReference;

@interface _OSLogVersioning : NSObject {
    _OSLogCollectionReference *_lcr;
    BOOL _closeOnRelease;
}

@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) BOOL hasEndTimeRef;
@property (readonly, nonatomic) long long version;

- (void)dealloc;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)checkTimesyncDB:(BOOL *)a0 error:(id *)a1;
- (id)initWithCollection:(id)a0 closeOnRelease:(BOOL)a1 error:(id *)a2;
- (id)initWithCollection:(id)a0 error:(id *)a1;
- (BOOL)performDestructiveUpdates:(id *)a0;
- (BOOL)repairTimesyncDB:(id *)a0;

@end
