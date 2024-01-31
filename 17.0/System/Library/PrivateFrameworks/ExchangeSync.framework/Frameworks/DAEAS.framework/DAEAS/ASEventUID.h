@class NSString, NSDate;

@interface ASEventUID : NSObject <ASParsingLeafNode, NSCopying> {
    NSDate *_exceptionDate;
    NSString *_uidWithoutExceptionDate;
    BOOL _isOutlookCreatedUid;
}

+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)expectsContent;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingWithSubItems;

- (id)description;
- (int)parsingState;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_uidStringBySettingExceptionDateInOutlookUUIDString:(id)a0 withTimeZone:(id)a1;
- (id)exceptionDate;
- (id)initWithASParseContext:(id)a0 root:(id)a1 parent:(id)a2 callbackDict:(id)a3 streamCallbackDict:(id)a4 lengthUntilEndOfTerminator:(int)a5;
- (id)initWithCalFrameworkString:(id)a0;
- (id)initWithGlobalObjectIdString:(id)a0;
- (id)initWithUidString:(id)a0;
- (id)recurrenceIDForResponseEmail;
- (void)setExceptionDate:(id)a0;
- (id)uidForActiveSyncWithTimeZone:(id)a0;
- (id)uidForCalFramework;
- (id)uidForResponseEmailWithTimeZone:(id)a0;
- (id)uidFromGlobalObjId:(id)a0 outIsOutlookCreatedUid:(BOOL *)a1;
- (id)uidWithoutExceptionDate;

@end
