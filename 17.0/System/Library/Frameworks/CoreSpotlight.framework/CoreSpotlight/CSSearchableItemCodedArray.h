@class NSString, CSDecoder;

@interface CSSearchableItemCodedArray : NSArray

@property (readonly, nonatomic) struct { char *containerBytes; struct { unsigned int embeddedReference; unsigned char type; } reference; } obj;
@property (readonly, nonatomic) CSDecoder *items;
@property (readonly, nonatomic) CSDecoder *itemsContent;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *protectionClass;

- (id)initWithItems:(id)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (unsigned long long)count;
- (void).cxx_destruct;
- (id)initWithItems:(id)a0 itemsContent:(id)a1;

@end
