@class NSString;

@interface CNVCardLineFactory : NSObject <CNVCardLineFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)version21LineFactory;
+ (id)version30LineFactory;

- (id)arrayLineWithName:(id)a0 value:(id)a1;
- (id)arrayLineWithName:(id)a0 value:(id)a1 itemSeparator:(id)a2;
- (id)dataLineWithName:(id)a0 value:(id)a1;
- (id)lineWithLiteralValue:(id)a0;
- (id)stringLineWithName:(id)a0 value:(id)a1;
- (id)versionPlaceholderLine;

@end
