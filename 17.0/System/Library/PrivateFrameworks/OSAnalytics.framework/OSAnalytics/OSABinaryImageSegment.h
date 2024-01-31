@class OSASymbolInfo;

@interface OSABinaryImageSegment : NSObject

@property int source;
@property unsigned long long used_index;
@property (readonly, nonatomic) OSASymbolInfo *symbolInfo;

- (id)details;
- (id)initWithSymbol:(id)a0;
- (id)initWithAddress:(unsigned long long)a0 size:(unsigned long long)a1 for:(unsigned char[16])a2;
- (id)full_details;
- (void).cxx_destruct;

@end
