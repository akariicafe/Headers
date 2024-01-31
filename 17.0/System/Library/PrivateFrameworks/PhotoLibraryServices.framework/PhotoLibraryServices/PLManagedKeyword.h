@class NSString, NSSet;

@interface PLManagedKeyword : PLManagedObject

@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *shortcut;
@property (retain, nonatomic) NSSet *assetAttributes;

+ (id)entityName;
+ (id)keywordForTitle:(id)a0 context:(id)a1;
+ (id)keywordForUuid:(id)a0 context:(id)a1;

- (id)payloadForChangedKeys:(id)a0;
- (void)awakeFromInsert;
- (id)payloadID;
- (id)payloadIDForTombstone:(id)a0;

@end
