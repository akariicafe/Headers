@class NSString, NSArray;

@interface IRTTRURLQuery : NSObject

@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *classification;
@property (readonly, nonatomic) NSString *componentName;
@property (readonly, nonatomic) NSString *componentVersion;
@property (readonly, nonatomic) NSString *componentID;
@property (readonly, nonatomic) NSString *reproducibility;
@property (copy, nonatomic) NSArray *extensionIdentifiers;
@property (copy, nonatomic) NSArray *remoteDeviceSelections;
@property (retain, nonatomic) NSString *radarDescription;

- (id)init;
- (id)build;
- (void).cxx_destruct;

@end
