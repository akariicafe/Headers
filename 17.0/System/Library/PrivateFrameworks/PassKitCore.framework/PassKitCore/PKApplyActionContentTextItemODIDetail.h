@class NSString;
@protocol NSCopying;

@interface PKApplyActionContentTextItemODIDetail : NSObject <PKApplyODIAttributesDictionaryProtocol, NSCopying, PKIdentifiable>

@property (readonly, copy, nonatomic) NSString *odiAttribute;
@property (readonly, copy, nonatomic) NSString *odiValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<NSCopying> identifier;

@end
