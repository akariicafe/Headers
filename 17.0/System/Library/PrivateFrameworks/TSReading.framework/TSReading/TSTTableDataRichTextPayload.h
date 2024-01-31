@class TSTRichTextPayload;

@interface TSTTableDataRichTextPayload : TSTTableDataObject {
    TSTRichTextPayload *mPayload;
}

- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initObjectWithRichTextPayload:(id)a0;

@end
