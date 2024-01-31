@class NSArray, NSString;

@interface MPResponse : NSObject <NSCopying, NSObject>

@property (copy, nonatomic) NSArray *middleware;
@property (readonly, nonatomic) id builder;
@property (readonly, copy, nonatomic) id request;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)builderProtocol;

- (void)invalidate;
- (id)initWithRequest:(id)a0 middleware:(id)a1;
- (id)_stateDumpObject;
- (void).cxx_destruct;
- (id)chain;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
