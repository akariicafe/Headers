@class NSMutableDictionary;

@interface FPDocumentAlternateContents : NSObject {
    NSMutableDictionary *_alternateContentsURLDictionary;
}

- (void).cxx_destruct;
- (void)dumpToDumper:(id)a0;
- (id)getAlternateContentsURLWrapperForItemID:(id)a0;
- (id)initWithAlternateContentsDictionary:(id)a0;
- (void)removeAlternateContentsURLForDocumentWithItemID:(id)a0;
- (void)setAlternateContentsURLWrapper:(id)a0 forDocumentWithItemID:(id)a1;
- (void)updateWithManagerAlternateContentsDictionary:(id)a0;

@end
