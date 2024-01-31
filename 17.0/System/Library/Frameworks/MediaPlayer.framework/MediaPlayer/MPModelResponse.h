@class MPPropertySet, MPSectionedCollection, MPModelRequest;

@interface MPModelResponse : NSObject

@property (retain, nonatomic) MPPropertySet *deferredSectionProperties;
@property (retain, nonatomic) MPPropertySet *deferredItemProperties;
@property (copy, nonatomic) MPSectionedCollection *results;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, copy, nonatomic) MPModelRequest *request;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

- (id)init;
- (void)_invalidate;
- (id)initWithRequest:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)getChangeDetailsFromPreviousResponse:(id)a0 completion:(id /* block */)a1;

@end
