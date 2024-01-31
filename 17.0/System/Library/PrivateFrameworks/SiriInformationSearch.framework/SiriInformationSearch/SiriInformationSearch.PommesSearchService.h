@class NSError, _TtC21SiriInformationSearch22PommesSearchRequestXPC, _TtC21SiriInformationSearch14PommesResponse;

@interface SiriInformationSearch.PommesSearchService : _TtCs12_SwiftObject <SiriInformationSearch.PommesSearchOrchestrating> {
    void /* unknown type, empty encoding */ handler;
    void /* unknown type, empty encoding */ instrumentationUtil;
}

- (void)searchInfiEntityWithRequest:(_TtC21SiriInformationSearch22PommesSearchRequestXPC *)a0 completionHandler:(void (^)(_TtC21SiriInformationSearch14PommesResponse *, NSError *))a1;

@end
