@class GEOGuidesHomeResultFilterTypeConcept, GEOPDGuidesHomeResultFilter;

@interface GEOGuidesHomeResultFilter : NSObject {
    GEOPDGuidesHomeResultFilter *_resultFilter;
}

@property (readonly, nonatomic) GEOGuidesHomeResultFilterTypeConcept *conceptFilter;
@property (readonly, nonatomic) long long filterType;
@property (readonly, nonatomic) GEOPDGuidesHomeResultFilter *pdResultFilter;

- (void).cxx_destruct;
- (id)initWithGuidesHomeResultFilter:(id)a0;

@end
