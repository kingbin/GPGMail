//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSScrollView.h"

@interface MUIAutomaticallyAdjustingScrollView : NSScrollView
{
    double _additionalTopInset;	// 232 = 0xe8
}

@property(nonatomic) double additionalTopInset; // @synthesize additionalTopInset=_additionalTopInset;
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000000000ba24
- (void)_updateContentInsets;	// IMP=0x000000000000b755
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000000b68d
- (void)viewDidMoveToWindow;	// IMP=0x000000000000b60a
- (void)viewWillMoveToWindow:(id)arg1;	// IMP=0x000000000000b56d

@end
