@class NSString, NSMutableArray;

@interface XRVMCoalescedRegion : XRVMRegion {
    NSMutableArray *_subRegions;
    NSString *_groupName;
    unsigned long long _virtualSize;
    unsigned int _multiplicityFlags;
}

- (id)displayType;
- (void)encodeWithCoder:(id)a0;
- (void)addRegion:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (unsigned long long)virtualSize;
- (id)subRegions;
- (BOOL)isFakeAggregate;
- (id)displayPath;
- (id)initWithRegions:(id)a0 groupName:(id)a1;
- (void)sortSubregionsWithComparator:(id /* block */)a0;

@end
