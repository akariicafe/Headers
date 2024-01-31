@interface BRDbRowObjectID : BRFileObjectID {
    unsigned long long _rowId;
    unsigned char _type;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (unsigned long long)rawID;
- (id)initWithRowID:(unsigned long long)a0 type:(unsigned char)a1;
- (BOOL)isFpfsItem;
- (id)description;
- (id)itemDBRowID;
- (id)asString;
- (id)documentID;
- (unsigned char)type;
- (id)initWithCoder:(id)a0;
- (id)folderID;

@end
