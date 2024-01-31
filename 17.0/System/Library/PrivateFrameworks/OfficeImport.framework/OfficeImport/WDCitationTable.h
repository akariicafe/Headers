@class WDDocument, NSMutableDictionary;

@interface WDCitationTable : NSObject {
    NSMutableDictionary *mCitations;
}

@property (readonly, weak) WDDocument *document;

- (unsigned long long)count;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDocument:(id)a0;
- (void)addCitation:(id)a0 forID:(id)a1;
- (id)citationFor:(id)a0;
- (id)citationIDs;

@end
