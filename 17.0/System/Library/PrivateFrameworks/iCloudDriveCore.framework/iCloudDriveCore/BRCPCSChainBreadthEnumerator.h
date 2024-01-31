@class PQLResultSet, BRCPCSChainInfo;
@protocol PQLEnumeration;

@interface BRCPCSChainBreadthEnumerator : NSEnumerator {
    BRCPCSChainInfo *_chainInfo;
    PQLResultSet<PQLEnumeration> *_enumerator;
}

- (void)dealloc;
- (id)nextObject;
- (void).cxx_destruct;
- (id)chainInfo;
- (id)initWithPCSChainInfo:(id)a0 clientZone:(id)a1;

@end
