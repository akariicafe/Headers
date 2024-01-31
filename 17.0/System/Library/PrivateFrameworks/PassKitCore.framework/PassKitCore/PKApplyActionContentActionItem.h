@class NSArray, NSString;
@protocol NSCopying;

@interface PKApplyActionContentActionItem : NSObject <PKApplyODIAttributesDictionaryProtocol, NSCopying, PKIdentifiable>

@property (readonly, copy, nonatomic) NSArray *items;
@property (readonly, copy, nonatomic) NSString *contextPrimaryActionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<NSCopying> identifier;

@end
