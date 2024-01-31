@class NSString, NSNumber;

@interface ASMovedItem : ASItem {
    NSString *_srcMsgId;
    NSNumber *_status;
    NSString *_dstMsgId;
}

+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;
+ (id)asParseRules;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingWithSubItems;

- (id)status;
- (void).cxx_destruct;
- (void)setStatus:(id)a0;
- (id)dstMsgId;
- (void)setDstMsgId:(id)a0;
- (void)setSrcMsgId:(id)a0;
- (id)srcMsgId;

@end
