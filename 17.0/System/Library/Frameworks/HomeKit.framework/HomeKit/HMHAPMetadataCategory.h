@class NSString, NSNumber;

@interface HMHAPMetadataCategory : NSObject <HMHAPMetadataCategory>

@property (retain, nonatomic) NSString *uuidStr;
@property (retain, nonatomic) NSString *catDescription;
@property (retain, nonatomic) NSNumber *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
