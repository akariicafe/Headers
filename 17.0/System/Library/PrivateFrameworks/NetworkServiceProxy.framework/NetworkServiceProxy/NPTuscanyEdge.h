@class NPLocation, NSString, NSDictionary, NPWaldo, NWEndpoint, NSDate;

@interface NPTuscanyEdge : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSDictionary *onRampLists;
@property (retain) NSDictionary *currentOnRampIndexList;
@property (readonly) NWEndpoint *probeEndpoint;
@property (readonly) NWEndpoint *onRampEndpoint;
@property (retain) NSDate *lastUsed;
@property (weak) NPWaldo *parentWaldo;
@property (retain) NWEndpoint *savedEndpoint;
@property BOOL reResolve;
@property (readonly) NSString *label;
@property unsigned long long index;
@property (readonly) NPLocation *location;
@property double distance;
@property BOOL probePending;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)resolveWithCompletionHandler:(id /* block */)a0;
- (long long)compareByDistance:(id)a0;
- (long long)currentIndex:(id)a0;
- (id)getCurrentOnRamp:(id)a0;
- (id)getOnRamp:(long long)a0 addressFamily:(id)a1;
- (id)getPortFromEndpoint:(id)a0 defaultPort:(id)a1;
- (id)initWithLabel:(id)a0 index:(unsigned long long)a1 onRampEndpoint:(id)a2 probeEndpoint:(id)a3 location:(id)a4;
- (void)iterateOnRampsForAddressFamily:(id)a0 withBlock:(id /* block */)a1;
- (void)linkWithOnRampsRetainMissingAddressFamilies:(BOOL)a0;
- (id)nextOnRampForLatency:(id)a0 outIndex:(long long *)a1;
- (void)setCurrentIndex:(long long)a0 addressFamily:(id)a1;
- (id)unsynthesizeAddresses:(id)a0;

@end
