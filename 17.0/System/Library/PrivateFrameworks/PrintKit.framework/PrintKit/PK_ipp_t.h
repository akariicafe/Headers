@class NSData, NSMutableArray;

@interface PK_ipp_t : NSObject <NSCopying, NSSecureCoding> {
    BOOL _addAttributesInAppropriateGroups;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSData *dataRemaining;
@property int state;
@property unsigned int request_id;
@property unsigned short op_or_status;
@property (readonly) NSMutableArray *attrs;

- (id)dataRepresentation;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithAttrs:(id)a0;
- (void)_addAttrToAppropriateGroup:(id)a0;
- (void)_addBoolean:(int)a0 name:(id)a1 value:(BOOL)a2;
- (void)_addCollection:(int)a0 name:(id)a1 value:(id)a2;
- (void)_addInteger:(int)a0 valueTag:(int)a1 name:(id)a2 value:(int)a3;
- (void)_addIntegers:(int)a0 valueTag:(int)a1 name:(id)a2 count:(unsigned long long)a3 adder:(id /* block */)a4;
- (void)_addOctetString:(int)a0 name:(id)a1 data:(const void *)a2 length:(int)a3;
- (void)_addRange:(int)a0 name:(id)a1 lower:(int)a2 upper:(int)a3;
- (void)_addRanges:(int)a0 name:(id)a1 count:(unsigned long long)a2 lowers:(const int *)a3 uppers:(const int *)a4;
- (void)_addResolution:(int)a0 name:(id)a1 unit:(int)a2 xres:(int)a3 yres:(int)a4;
- (void)_addString:(int)a0 valueTag:(int)a1 name:(id)a2 lang:(id)a3 value:(id)a4;
- (void)_addStrings:(int)a0 valueTag:(int)a1 name:(id)a2 lang:(id)a3 values:(id)a4;
- (void)_deleteAttribute:(id)a0;
- (id)_descriptionLeader;
- (id)_findAttribute0:(id)a0 valueTag:(int)a1;
- (void)_withGroupingBehavior:(id /* block */)a0;
- (id)addNewAttr:(id)a0 groupTag:(int)a1 valueTag:(int)a2;
- (void)enumerateAttributes:(id /* block */)a0;

@end
