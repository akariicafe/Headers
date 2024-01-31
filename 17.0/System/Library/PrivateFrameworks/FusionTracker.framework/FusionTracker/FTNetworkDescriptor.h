@class NSString, NSArray;

@interface FTNetworkDescriptor : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *inputImages;
@property (retain, nonatomic) NSArray *inputReferences;
@property (retain, nonatomic) NSArray *outputNames;

- (id)init;
- (void).cxx_destruct;
- (id)onlyImageInput;

@end
