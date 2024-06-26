@interface _UIFastIndexSet : NSObject <NSCopying, NSMutableCopying> {
    struct variant<_UIBitSet<256>, _UISmallVector<unsigned short, 16>, std::vector<unsigned long>> { struct __impl<_UIBitSet<256>, _UISmallVector<unsigned short, 16>, std::vector<unsigned long>> { union __union<std::__variant_detail::_Trait::_Available, 0UL, _UIBitSet<256>, _UISmallVector<unsigned short, 16>, std::vector<unsigned long>> { char __dummy; struct __alt<0UL, _UIBitSet<256>> { struct _UIBitSet<256UL> { unsigned long long _chunks[4]; } __value; } __head; union __union<std::__variant_detail::_Trait::_Available, 1UL, _UISmallVector<unsigned short, 16>, std::vector<unsigned long>> { char __dummy; struct __alt<1UL, _UISmallVector<unsigned short, 16>> { struct _UISmallVector<unsigned short, 16UL> { void /* unknown type, empty encoding */ _vector; unsigned long long _size; } __value; } __head; union __union<std::__variant_detail::_Trait::_Available, 2UL, std::vector<unsigned long>> { char __dummy; struct __alt<2UL, std::vector<unsigned long>> { struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *__value_; } __end_cap_; } __value; } __head; union __union<std::__variant_detail::_Trait::_Available, 3UL> { } __tail; } __tail; } __tail; } __data; unsigned int __index; } __impl_; } _inOutIndexes;
}

+ (id)indexSet;

- (unsigned long long)hash;
- (id).cxx_construct;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
