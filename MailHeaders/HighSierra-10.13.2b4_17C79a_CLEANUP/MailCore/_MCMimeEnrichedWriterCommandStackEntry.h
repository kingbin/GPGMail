//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class NSString;

@interface _MCMimeEnrichedWriterCommandStackEntry : NSObject
{
    NSString *_command;
    unsigned long long _attrStringIndex;
    id _parameter;
    _MCMimeEnrichedWriterCommandStackEntry *_parent;
}

@property(retain, nonatomic) _MCMimeEnrichedWriterCommandStackEntry *parent; // @synthesize parent=_parent;
@property(retain, nonatomic) id parameter; // @synthesize parameter=_parameter;
@property(nonatomic) unsigned long long attrStringIndex; // @synthesize attrStringIndex=_attrStringIndex;
@property(nonatomic) __weak NSString *command; // @synthesize command=_command;
//- (void).cxx_destruct;
- (id)init;

@end
