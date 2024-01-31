@class FPItemID;

@interface _FPLocationAgnosticID : NSObject {
    FPItemID *_itemID;
    FPItemID *_alternateID;
}

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithItem:(id)a0;
- (id)initWithItemID:(id)a0;

@end
