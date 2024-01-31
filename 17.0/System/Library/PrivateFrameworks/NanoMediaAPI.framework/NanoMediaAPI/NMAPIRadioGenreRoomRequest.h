@class NSURL;

@interface NMAPIRadioGenreRoomRequest : NMAPIRequest

@property (copy, nonatomic) NSURL *URL;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_roomIdentifierWithStoreURLBag:(id)a0;
- (id)_bagRoomURLRegularExpressionWithStoreURLBag:(id)a0;
- (Class)responseParserClass;
- (id)urlComponentsWithStoreURLBag:(id)a0 error:(id *)a1;

@end
