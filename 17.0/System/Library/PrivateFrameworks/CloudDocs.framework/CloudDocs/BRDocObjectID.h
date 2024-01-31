@interface BRDocObjectID : BRFileObjectID {
    unsigned int _docID;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (unsigned long long)rawID;
- (BOOL)isFpfsItem;
- (id)description;
- (id)initWithDocIDNumber:(id)a0;
- (id)asString;
- (BOOL)isDocumentID;
- (id)initWithDocID:(unsigned int)a0;
- (id)documentID;
- (unsigned char)type;
- (id)initWithCoder:(id)a0;

@end
