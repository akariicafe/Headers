@class NSMutableArray;
@protocol VMUStackLogReader;

@interface VMUVMRegionTracker : NSObject <NSSecureCoding> {
    id<VMUStackLogReader> _stackLogReader;
    NSMutableArray *_regionInfoArray;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long regionCount;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (unsigned long long)_regionIndexForAddress:(unsigned long long)a0;
- (void)convertStackIDs:(id /* block */)a0;
- (unsigned long long)handleStackLogType:(unsigned int)a0 address:(unsigned long long)a1 size:(unsigned long long)a2 stackID:(unsigned long long)a3;
- (id)initWithStackLogReader:(id)a0;
- (id)vmRegionRangeInfoForRange:(struct _VMURange { unsigned long long x0; unsigned long long x1; })a0;

@end
