@class NSString, NSNumber;

@interface ISResourceMetaData : NSObject <ISResourceMetadata>

@property (retain) NSString *name;
@property (retain) NSNumber *dimension;
@property (retain) NSNumber *scale;
@property BOOL selectedVariant;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
