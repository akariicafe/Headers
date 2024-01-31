@class NSString, NSArray;
@protocol NSCopying;

@interface PKApplyActionContentTextItem : NSObject <PKApplyODIAttributesDictionaryProtocol, NSCopying, PKIdentifiable>

@property (copy, nonatomic) NSString *analyticsIdentifier;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSArray *odiDetails;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<NSCopying> identifier;

@end
